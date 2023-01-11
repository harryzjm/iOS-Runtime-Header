//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTAvatarAttributeEditorModel : NSObject
{
    NSArray *_categories;
}

+ (id)diffOfSections:(id)arg1 fromSections:(id)arg2;
+ (id)diffOfSectionItems:(id)arg1 fromSectionItems:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)differenceFromModel:(id)arg1;
- (id)initWithCategories:(id)arg1;

@end
