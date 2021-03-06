//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWWebViewFactory-Protocol.h>

@class NSPointerArray, NSString;

@interface SWWebViewFactory : NSObject <SWWebViewFactory>
{
    NSPointerArray *_webViews;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSPointerArray *webViews; // @synthesize webViews=_webViews;
- (void)assignRelatedWebViewToConfiguration:(id)arg1;
- (id)createWebViewWithWebViewConfiguration:(id)arg1 scrollSettings:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

