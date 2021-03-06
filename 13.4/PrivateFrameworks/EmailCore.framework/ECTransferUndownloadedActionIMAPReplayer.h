//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECLocalActionReplayer.h>

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>
{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ECIMAPLocalActionReplayerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
- (id)_uidIndexSet;
- (_Bool)_deleteUIDs:(id)arg1;
- (id)_copyAllMessages:(_Bool)arg1;
- (_Bool)_moveAllMessages;
- (id)replayAction;

@end

