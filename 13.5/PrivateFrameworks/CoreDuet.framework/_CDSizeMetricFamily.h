//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _CDSizeMetricFamily : NSObject
{
    NSString *_name;
    NSMutableDictionary *_sizeMetrics;
}

+ (id)sizeMetricFamilyWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *sizeMetrics; // @synthesize sizeMetrics=_sizeMetrics;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)allSizeMetrics;
- (id)sizeMetricWithName:(id)arg1;
- (id)sizeMetricWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3;
- (id)initWithName:(id)arg1;

@end

