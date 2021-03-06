//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARCollaborationStats : NSObject
{
    _Bool _originAnchorMerged;
    unsigned long long _localSessionIdentifier;
    unsigned long long _mergedKeyframesCount;
    unsigned long long _remainingKeyframesCount;
    unsigned long long _remainingWeakKeyframesCount;
    unsigned long long _externalKeyframesCount;
    unsigned long long _externalWeakKeyframesCount;
    unsigned long long _anchorsCount;
}

@property(nonatomic) _Bool originAnchorMerged; // @synthesize originAnchorMerged=_originAnchorMerged;
@property(nonatomic) unsigned long long anchorsCount; // @synthesize anchorsCount=_anchorsCount;
@property(nonatomic) unsigned long long externalWeakKeyframesCount; // @synthesize externalWeakKeyframesCount=_externalWeakKeyframesCount;
@property(nonatomic) unsigned long long externalKeyframesCount; // @synthesize externalKeyframesCount=_externalKeyframesCount;
@property(nonatomic) unsigned long long remainingWeakKeyframesCount; // @synthesize remainingWeakKeyframesCount=_remainingWeakKeyframesCount;
@property(nonatomic) unsigned long long remainingKeyframesCount; // @synthesize remainingKeyframesCount=_remainingKeyframesCount;
@property(nonatomic) unsigned long long mergedKeyframesCount; // @synthesize mergedKeyframesCount=_mergedKeyframesCount;
@property(nonatomic) unsigned long long localSessionIdentifier; // @synthesize localSessionIdentifier=_localSessionIdentifier;

@end

