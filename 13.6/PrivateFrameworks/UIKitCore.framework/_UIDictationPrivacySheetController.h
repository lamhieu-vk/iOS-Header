//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

@class OBPrivacyPresenter;
@protocol _UIDictationPrivacySheetControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIDictationPrivacySheetController : UINavigationController
{
    id <_UIDictationPrivacySheetControllerDelegate> _privacyDelegate;
    OBPrivacyPresenter *_privacyPresenter;
    long long _sheetType;
}

@property(nonatomic) long long sheetType; // @synthesize sheetType=_sheetType;
@property(retain, nonatomic) OBPrivacyPresenter *privacyPresenter; // @synthesize privacyPresenter=_privacyPresenter;
@property(nonatomic) id <_UIDictationPrivacySheetControllerDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (void)dismiss;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (_Bool)_canShowWhileLocked;

@end

