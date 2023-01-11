//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLMomentShare;

@interface CPLMomentShareScopeChange <NSSecureCoding, NSCopying>
{
    CPLMomentShare *_momentShare;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void).cxx_destruct;
- (id)description;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(_Bool *)arg2;
- (void)_setupWithLibraryInfo:(id)arg1;

@end
