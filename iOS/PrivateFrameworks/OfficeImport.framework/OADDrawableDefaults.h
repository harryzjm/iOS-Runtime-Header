//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawableCategoryDefaults;

__attribute__((visibility("hidden")))
@interface OADDrawableDefaults : NSObject
{
    OADDrawableCategoryDefaults *mShapeDefaults;
    OADDrawableCategoryDefaults *mLineDefaults;
    OADDrawableCategoryDefaults *mTextDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OADDrawableCategoryDefaults *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
- (id)description;
- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (void)addDefaults;
- (_Bool)isEmpty;

@end

