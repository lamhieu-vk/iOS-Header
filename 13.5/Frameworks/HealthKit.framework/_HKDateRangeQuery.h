//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKDateRangeQueryClientInterface-Protocol.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface>
{
    CDUnknownBlockType _handler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)client_deliverDateRangeDictionary:(id)arg1 forQuery:(id)arg2;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

