//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RTIDocumentState, RTIDocumentTraits;

@interface RTIInputSystemClientSession : NSObject
{
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(retain, nonatomic) RTIDocumentTraits *documentTraits; // @synthesize documentTraits=_documentTraits;

@end

