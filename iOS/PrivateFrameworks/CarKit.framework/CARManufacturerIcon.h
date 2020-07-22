//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface CARManufacturerIcon : NSObject
{
    _Bool _prerendered;
    NSData *_imageData;
    struct CGSize _pixelSize;
}

@property(readonly, nonatomic, getter=isPrerendered) _Bool prerendered; // @synthesize prerendered=_prerendered;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end

