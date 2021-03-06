//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class FCPersonalizationFeature;
@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_feature;
    double _featureClickPrior;
    double _featureImpressionPrior;
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *_absolutePresenceConfig;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig; // @synthesize absolutePresenceConfig=_absolutePresenceConfig;
@property(nonatomic) double featureImpressionPrior; // @synthesize featureImpressionPrior=_featureImpressionPrior;
@property(nonatomic) double featureClickPrior; // @synthesize featureClickPrior=_featureClickPrior;
@property(copy, nonatomic) FCPersonalizationFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

