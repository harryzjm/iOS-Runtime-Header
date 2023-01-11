//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface WFWordPressTerm : MTLModel <MTLJSONSerializing>
{
    NSNumber *_termId;
    NSString *_name;
    NSString *_taxonomy;
}

+ (id)termIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *taxonomy; // @synthesize taxonomy=_taxonomy;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *termId; // @synthesize termId=_termId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
