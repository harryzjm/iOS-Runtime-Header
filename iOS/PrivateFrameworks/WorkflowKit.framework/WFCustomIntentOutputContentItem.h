//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItem.h>

#import <WorkflowKit/WFContentItemClass-Protocol.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)codableDescription;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) INCustomObject *customObject;

@end
