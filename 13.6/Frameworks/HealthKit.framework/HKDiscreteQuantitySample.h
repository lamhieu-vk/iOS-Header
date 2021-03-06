//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, NSDateInterval;

@interface HKDiscreteQuantitySample : HKQuantitySample
{
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    HKQuantity *_mostRecentQuantity;
    NSDateInterval *_mostRecentQuantityDateInterval;
    _Bool __hasMinimumQuantity;
    _Bool __hasMaximumQuantity;
    _Bool __hasMostRecentQuantity;
    _Bool __hasMostRecentQuantityDateInterval;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool _hasMostRecentQuantityDateInterval; // @synthesize _hasMostRecentQuantityDateInterval=__hasMostRecentQuantityDateInterval;
@property(nonatomic) _Bool _hasMostRecentQuantity; // @synthesize _hasMostRecentQuantity=__hasMostRecentQuantity;
@property(nonatomic) _Bool _hasMaximumQuantity; // @synthesize _hasMaximumQuantity=__hasMaximumQuantity;
@property(nonatomic) _Bool _hasMinimumQuantity; // @synthesize _hasMinimumQuantity=__hasMinimumQuantity;
@property(copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval; // @synthesize mostRecentQuantityDateInterval=_mostRecentQuantityDateInterval;
@property(copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity; // @synthesize mostRecentQuantity=_mostRecentQuantity;
@property(copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity; // @synthesize maximumQuantity=_maximumQuantity;
@property(copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity; // @synthesize minimumQuantity=_minimumQuantity;
@property(copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;

@end

