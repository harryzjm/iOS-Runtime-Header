//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSUWarning.h"

@interface TSUMediaUploadWarning : TSUWarning
{
    _Bool _isFromUploader;
}

@property(readonly, nonatomic) _Bool isFromUploader; // @synthesize isFromUploader=_isFromUploader;
- (id)initWithKind:(long long)arg1 message:(id)arg2 isFromUploader:(_Bool)arg3;

@end

