//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDChartDetailViewDataSource-Protocol.h>

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod, NSString;

__attribute__((visibility("hidden")))
@interface WDSleepDetailViewInterruptionsDataSource : NSObject <WDChartDetailViewDataSource>
{
    HKSleepAnalysis *_sleepAnalysis;
    HKSleepDay *_sleepDay;
    HKSleepPeriod *_sleepPeriod;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKSleepPeriod *sleepPeriod; // @synthesize sleepPeriod=_sleepPeriod;
@property(readonly, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property(readonly, nonatomic) HKSleepAnalysis *sleepAnalysis; // @synthesize sleepAnalysis=_sleepAnalysis;
- (id)detailSectionForRow:(long long)arg1 column:(long long)arg2;
- (id)mainSection;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSleepAnalysis:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

