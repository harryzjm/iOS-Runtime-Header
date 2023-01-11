//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDReference, EDString;

__attribute__((visibility("hidden")))
@interface EDHyperlink : NSObject
{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;
- (void).cxx_destruct;
- (id)description;
- (void)setType:(int)arg1;
- (int)type;
- (void)setReference:(id)arg1;
- (id)reference;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
- (void)setTextMark:(id)arg1;
- (id)textMark;
- (void)setDescriptionText:(id)arg1;
- (id)descriptionText;
- (void)setDosPath:(id)arg1;
- (id)dosPath;
- (void)setPath:(id)arg1;
- (id)path;

@end
