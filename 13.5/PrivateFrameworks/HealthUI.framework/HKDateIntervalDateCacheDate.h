//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HKDateIntervalDateCacheDate : NSObject
{
    NSDate *_date;
    long long _dateType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2;

@end

