//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartAxisID, TSCHChartGridAdapter;

@interface TSCHChartSeriesAxisStorage : NSObject
{
    TSCHChartGridAdapter *adapter;
    TSCHChartAxisID *axisID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID;
@property(retain, nonatomic) TSCHChartGridAdapter *adapter; // @synthesize adapter;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueAtIndex:(unsigned long long)arg1 multiDataSetIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfValues;

@end

