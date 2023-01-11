//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCVolume : NSObject
{
    struct statfs _stfs;
    _Bool _isCaseSensitive;
    _Bool _isIgnoringOwnership;
    _Bool _hasRenameExcl;
    _Bool _hasRenameSwap;
    _Bool _hasCloning;
    int _deviceID;
}

@property(readonly, nonatomic) _Bool hasCloning; // @synthesize hasCloning=_hasCloning;
@property(readonly, nonatomic) _Bool hasRenameSwap; // @synthesize hasRenameSwap=_hasRenameSwap;
@property(readonly, nonatomic) _Bool hasRenameExcl; // @synthesize hasRenameExcl=_hasRenameExcl;
@property(readonly, nonatomic) _Bool isIgnoringOwnership; // @synthesize isIgnoringOwnership=_isIgnoringOwnership;
@property(readonly, nonatomic) _Bool isCaseSensitive; // @synthesize isCaseSensitive=_isCaseSensitive;
@property(readonly, nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSNumber *totalSize;
@property(readonly, nonatomic) NSNumber *freeSize;
- (id)description;
@property(readonly, nonatomic) NSString *fsTypeName;
@property(readonly, nonatomic) NSString *mountPath;
- (_Bool)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id *)arg3;

@end
