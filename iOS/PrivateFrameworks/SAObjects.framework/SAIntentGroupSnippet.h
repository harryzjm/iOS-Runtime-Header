//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, SAIntentGroupProtobufMessage;
@protocol SAServerBoundCommand;

@interface SAIntentGroupSnippet
{
}

+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippet;
@property(copy, nonatomic) NSNumber *widgetIndex;
@property(nonatomic) _Bool widgetAllowed;
@property(copy, nonatomic) NSArray *snippetTemplates;
@property(retain, nonatomic) id <SAServerBoundCommand> processSynapseFlowCommand;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(copy, nonatomic) NSArray *commands;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

