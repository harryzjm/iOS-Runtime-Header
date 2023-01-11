//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>

@interface FBApplicationLibraryConfiguration : NSObject <NSCopying>
{
    Class _applicationInfoClass;
    Class _applicationPlaceholderClass;
    _Bool _allowConcurrentLoading;
    CDUnknownBlockType _installedApplicationFilter;
    CDUnknownBlockType _placeholderFilter;
}

@property(copy, nonatomic) CDUnknownBlockType placeholderFilter; // @synthesize placeholderFilter=_placeholderFilter;
@property(copy, nonatomic) CDUnknownBlockType installedApplicationFilter; // @synthesize installedApplicationFilter=_installedApplicationFilter;
@property(nonatomic) _Bool allowConcurrentLoading; // @synthesize allowConcurrentLoading=_allowConcurrentLoading;
@property(retain, nonatomic) Class applicationPlaceholderClass; // @synthesize applicationPlaceholderClass=_applicationPlaceholderClass;
@property(retain, nonatomic) Class applicationInfoClass; // @synthesize applicationInfoClass=_applicationInfoClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

