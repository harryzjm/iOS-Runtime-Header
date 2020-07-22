//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GQDPointPath
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (struct CGPoint)point;
- (int)type;
- (int)mapStrType:(struct __CFString *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

