//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram
{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
    NSArray *mEquivalentDrawables;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *equivalentDrawables; // @synthesize equivalentDrawables=mEquivalentDrawables;
- (id)description;
- (id)styleDefinition;
- (id)colorTransform;
- (void)setDocumentPoint:(id)arg1;
- (id)documentPoint;
- (void)setParentTextListStyle:(id)arg1;
- (id)init;

@end
