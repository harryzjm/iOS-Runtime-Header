//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IBSystemImageInfo
{
    _Bool _isSymbol;
    _Bool _encodeAsFirstGenenerationImage;
    NSString *_name;
    long long _imageNamespace;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool encodeAsFirstGenenerationImage; // @synthesize encodeAsFirstGenenerationImage=_encodeAsFirstGenenerationImage;
@property(nonatomic) long long imageNamespace; // @synthesize imageNamespace=_imageNamespace;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)infoForCompiling;
- (_Bool)isSymbolImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToImageInfo:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithName:(id)arg1 imageNamespace:(long long)arg2 encodeAsFirstGenenerationImage:(_Bool)arg3 isSymbol:(_Bool)arg4;
- (id)init;

@end
