//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFAutomatorWorkflowActionMigrationEvent
{
    _Bool _completed;
    NSString *_key;
    NSString *_automatorActionIdentifier;
}

+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSString *automatorActionIdentifier; // @synthesize automatorActionIdentifier=_automatorActionIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end
