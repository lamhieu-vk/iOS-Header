//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject
{
    HFTemperatureFormatter *_temperatureFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) HFTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)booleanFormatter;
- (id)luxFormatter;
- (id)arcDegreeFormatter;
- (id)timeIntervalFormatter;
- (id)percentFormatter;
- (id)init;
- (void)registerTemperatureFormatter:(id)arg1;

@end

