//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem;

@interface QLTUbiquitousFileThumbnailRequest
{
    FPItem *_item;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) FPItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4;

@end

