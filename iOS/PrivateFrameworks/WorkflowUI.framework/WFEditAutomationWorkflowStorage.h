//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFWorkflowStorage-Protocol.h>

@class NSString, WFWorkflowRecord, WFWorkflowReference;

@interface WFEditAutomationWorkflowStorage : NSObject <WFWorkflowStorage>
{
    WFWorkflowReference *_reference;
    WFWorkflowRecord *_originalRecord;
    WFWorkflowRecord *_lastSavedRecord;
}

- (void).cxx_destruct;
@property(copy, nonatomic) WFWorkflowRecord *lastSavedRecord; // @synthesize lastSavedRecord=_lastSavedRecord;
@property(copy, nonatomic) WFWorkflowRecord *originalRecord; // @synthesize originalRecord=_originalRecord;
@property(readonly, nonatomic) WFWorkflowReference *reference; // @synthesize reference=_reference;
- (_Bool)reloadRecord:(id)arg1 error:(id *)arg2;
- (_Bool)saveRecord:(id)arg1 error:(id *)arg2;
- (id)initWithReference:(id)arg1 originalRecord:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
