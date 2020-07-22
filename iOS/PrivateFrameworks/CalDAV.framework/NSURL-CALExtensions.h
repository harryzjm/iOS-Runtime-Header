//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CALExtensions)
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (_Bool)isEqualToURL:(id)arg1;
- (id)serverURL;
- (id)unquotedPassword;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)queryParameters;
@end
