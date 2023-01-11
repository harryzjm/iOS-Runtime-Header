//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INFile.h>

#import <WorkflowKit/WFCodableAttributeContentConvertible-Protocol.h>

@class NSString;

@interface INFile (Workflow) <WFCodableAttributeContentConvertible>
+ (Class)wf_contentItemClass;
- (id)wf_fileRepresentation;
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wf_contentItemWithCodableAttribute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
