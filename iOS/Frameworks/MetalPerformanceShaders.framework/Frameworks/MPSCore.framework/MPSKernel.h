//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPSCore/NSCopying-Protocol.h>
#import <MPSCore/NSSecureCoding-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MPSKernel : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _options;
    struct MPSDevice *_device;
    struct MPSLibrary *_library;
    NSString *_label;
    unsigned long long _allowedOptions;
    unsigned int _tuningParams;
    unsigned int _maxTuningParams;
    CDUnion_cbb8185c _fileVersion;
    unsigned int _privateOptions;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDUnion_cbb8185c fileVersion; // @synthesize fileVersion=_fileVersion;
@property(copy) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(id)arg1;
- (id)sharedInitWithDevice:(id)arg1;
@property(readonly, retain, nonatomic) id <MTLDevice> device;
- (void)dealloc;
- (id)init;

@end

