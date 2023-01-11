//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCoding-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBImageConfiguration : NSObject <IBBinaryArchiving, NSCopying, NSCoding>
{
    long long _symbolScale;
    long long _renderingMode;
}

+ (id)configurationWithSymbolScale:(long long)arg1 renderingMode:(long long)arg2;
@property(readonly, nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, nonatomic) long long symbolScale; // @synthesize symbolScale=_symbolScale;
@property(readonly, copy) NSString *description;
- (id)configurationWithSymbolScale:(long long)arg1;
- (id)configurationWithRenderingMode:(long long)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToImageConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSymbolScale:(long long)arg1 renderingMode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
