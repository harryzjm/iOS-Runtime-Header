//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject
{
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id *)arg3;
- (id)description;
- (void)setText:(id)arg1;
- (id)text;
- (id)shapeProperties;
- (id)propertySet;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)init;

@end
