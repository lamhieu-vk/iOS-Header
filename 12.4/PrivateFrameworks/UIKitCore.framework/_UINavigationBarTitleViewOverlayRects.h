//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleViewOverlayRects : NSObject
{
    struct CGRect _backButtonRect;
    struct CGRect _leadingItemsRect;
    struct CGRect _titleRect;
    struct CGRect _trailingItemsRect;
}

@property(nonatomic) struct CGRect trailingItemsRect; // @synthesize trailingItemsRect=_trailingItemsRect;
@property(nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(nonatomic) struct CGRect leadingItemsRect; // @synthesize leadingItemsRect=_leadingItemsRect;
@property(nonatomic) struct CGRect backButtonRect; // @synthesize backButtonRect=_backButtonRect;
- (id)description;
- (id)asArray;
- (void)reset;
- (id)init;

@end

