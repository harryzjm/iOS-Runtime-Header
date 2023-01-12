//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconFoundation/NSSecureCoding-Protocol.h>

@class CUICatalog, NSString, NSURL;

@interface IFSymbol : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;
    CUICatalog *_catalog;
    NSURL *_bundleURL;
    NSString *_name;
}

+ (id)coreGlyphsPrivateCatalog;
+ (id)coreGlyphsCatalog;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (id)imageForDescriptor:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
@property(readonly) CUICatalog *catalog; // @synthesize catalog=_catalog;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1 bundleURL:(id)arg2;

@end
