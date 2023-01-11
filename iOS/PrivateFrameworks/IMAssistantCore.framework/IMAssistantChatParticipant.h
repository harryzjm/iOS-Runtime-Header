//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, IMHandle;

@interface IMAssistantChatParticipant : NSObject
{
    IMHandle *_imHandle;
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) IMHandle *imHandle; // @synthesize imHandle=_imHandle;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIMHandle:(id)arg1 contact:(id)arg2;

@end
