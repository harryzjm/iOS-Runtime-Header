//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBImageConfiguration, NSString;

@interface IBAbstractImageInfo : NSObject
{
    IBImageConfiguration *_imageConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBImageConfiguration *imageConfiguration; // @synthesize imageConfiguration=_imageConfiguration;
- (_Bool)isSymbolImage;
- (_Bool)hasIntrinsicSize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToImageInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)imageInfoWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

