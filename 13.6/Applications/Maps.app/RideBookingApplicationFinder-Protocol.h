//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol RideBookingApplicationFinderDelegate;

@protocol RideBookingApplicationFinder <NSObject>
@property(nonatomic) __weak id <RideBookingApplicationFinderDelegate> delegate;
- (_Bool)readyToLoadApps;
@end

