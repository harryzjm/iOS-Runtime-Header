//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (FamilyCircle)
- (id)fa_dictionaryFromPlistData;
- (id)_faCircularImageDataWithDiameter:(double)arg1 cropRect:(struct CGRect)arg2;
- (struct CGContext *)_faCreateContextWithImage:(struct CGImage *)arg1 crop:(struct CGRect)arg2 diameter:(double)arg3;
- (struct CGRect)_faTranformedRectForImageSize:(struct CGSize)arg1 cropRect:(struct CGRect)arg2 diameter:(double)arg3;
- (struct CGImage *)_faCreateImageRef;
- (id)_faCircularImageDataWithDiameter:(double)arg1;
@end

