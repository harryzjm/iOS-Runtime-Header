//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessHandle, NSString;

@interface UISceneOpenURLOptions : NSObject
{
    NSString *_sourceApp;
    BSProcessHandle *_sourceProcessHandle;
    id _annotation;
    _Bool _openInPlace;
    _Bool _openAsDownload;
}

+ (id)_optionsFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool _openAsDownload; // @synthesize _openAsDownload;
@property(readonly, nonatomic) _Bool openInPlace; // @synthesize openInPlace=_openInPlace;
@property(readonly, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) BSProcessHandle *_sourceProcessHandle; // @synthesize _sourceProcessHandle;
@property(readonly, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApp;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(_Bool)arg4 openAsDownload:(_Bool)arg5;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(_Bool)arg4;

@end
