//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitServices/NSObject-Protocol.h>

@class NSNumber, NSObject;

@protocol UISApplicationStateXPCServerInterface <NSObject>
- (oneway void)setNextWakeIntervalSinceReferenceDate:(NSNumber *)arg1;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(NSNumber *)arg1;
- (oneway void)setUsesBackgroundNetwork:(NSNumber *)arg1;
- (void)usesBackgroundNetworkWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)setBadgeValue:(NSObject *)arg1;
- (void)badgeValueWithCompletion:(void (^)(NSObject *, NSError *))arg1;
@end

