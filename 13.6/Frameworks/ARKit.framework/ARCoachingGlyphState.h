//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ARCoachingGlyphStateDelegate;

@interface ARCoachingGlyphState : NSObject
{
    CDStruct_0e8a9a91 _quaternionTarget;
    MISSING_TYPE *_scaleTarget;
    unsigned long long _snapState;
    _Bool _isVertical;
    id <ARCoachingGlyphStateDelegate> _delegate;
    MISSING_TYPE *_topPlaneTranslationTarget;
    MISSING_TYPE *_bottomPlaneTranslationTarget;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(readonly, nonatomic) MISSING_TYPE *bottomPlaneTranslationTarget; // @synthesize bottomPlaneTranslationTarget=_bottomPlaneTranslationTarget;
@property(readonly, nonatomic) MISSING_TYPE *topPlaneTranslationTarget; // @synthesize topPlaneTranslationTarget=_topPlaneTranslationTarget;
@property(nonatomic) __weak id <ARCoachingGlyphStateDelegate> delegate; // @synthesize delegate=_delegate;
- (MISSING_TYPE *)computeBottomPlaneTranslationTarget;
- (MISSING_TYPE *)computeTopPlaneTranslationTarget;
- (MISSING_TYPE *)computeScaleTarget;
- (CDStruct_183601bc)computeQuaternionTarget;
- (void)setBottomPlaneTranslationTarget: /* Error: Ran out of types for this method. */;
- (void)setTopPlaneTranslationTarget: /* Error: Ran out of types for this method. */;
- (void)setScaleTarget: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) MISSING_TYPE *scaleTarget;
- (void)setQuaternionTarget:(CDStruct_183601bc)arg1;
@property(readonly, nonatomic) CDStruct_183601bc quaternionTarget;
@property(nonatomic) unsigned long long snapState;
- (id)init;

@end

