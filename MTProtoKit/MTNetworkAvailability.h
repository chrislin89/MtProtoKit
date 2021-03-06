/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <Foundation/Foundation.h>

@class MTNetworkAvailability;

@protocol MTNetworkAvailabilityDelegate <NSObject>

@optional

- (void)networkAvailabilityChanged:(MTNetworkAvailability *)networkAvailability networkIsAvailable:(bool)networkIsAvailable;

@end

@interface MTNetworkAvailability : NSObject

@property (nonatomic, weak) id<MTNetworkAvailabilityDelegate> delegate;

- (instancetype)initWithDelegate:(id<MTNetworkAvailabilityDelegate>)delegate;

@end
