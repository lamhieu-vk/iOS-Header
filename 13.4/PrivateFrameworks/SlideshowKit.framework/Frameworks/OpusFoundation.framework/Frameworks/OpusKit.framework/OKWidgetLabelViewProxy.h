//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKWidgetLabelViewProxyExports-Protocol.h>

@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports>
{
    id _label;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)setSettingText:(id)arg1;
- (id)settingText;
- (void)setSettingTextBackgroundColor:(id)arg1;
- (void)setSettingTextColor:(id)arg1;
- (id)settingTextColor;
- (void)setSettingFontSize:(float)arg1;
- (float)settingFontSize;
- (void)setSettingFontName:(id)arg1;
- (id)settingFontName;
- (void)setSettingTextAlignment:(long long)arg1;
- (long long)settingTextAlignment;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (id)layoutSettingsKeys;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (id)label;

@end

