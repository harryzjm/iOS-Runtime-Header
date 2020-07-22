//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSString, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTAttributionItem <SASTActionableTemplateItem>
{
}

+ (id)attributionItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)attributionItem;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

