//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSCopying-Protocol.h>
#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isShortcutsApp;
    NSString *_identifier;
    NSString *_workflowIdentifier;
    NSDate *_creationDate;
    NSString *_automationType;
    NSString *_progressCategory;
    NSData *_serializedWorkflowControllerState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *serializedWorkflowControllerState; // @synthesize serializedWorkflowControllerState=_serializedWorkflowControllerState;
@property(nonatomic) _Bool isShortcutsApp; // @synthesize isShortcutsApp=_isShortcutsApp;
@property(readonly, copy, nonatomic) NSString *progressCategory; // @synthesize progressCategory=_progressCategory;
@property(retain, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *workflowIdentifier; // @synthesize workflowIdentifier=_workflowIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)progressForPublishingWithTotalUnitCount:(long long)arg1 cancellationHandler:(CDUnknownBlockType)arg2;
- (void)removeProgressSubscriber:(id)arg1;
- (id)addProgressSubscriberUsingPublishingHandler:(CDUnknownBlockType)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1;

@end
