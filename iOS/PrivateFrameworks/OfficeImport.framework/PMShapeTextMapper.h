//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMStyle, OADOrientedBounds, OADTextBody;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper
{
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    _Bool mRectangular;
}

- (void).cxx_destruct;
- (unsigned char)textAnchor;
- (_Bool)isTableCellContent;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setRectangular:(_Bool)arg1;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;

@end

