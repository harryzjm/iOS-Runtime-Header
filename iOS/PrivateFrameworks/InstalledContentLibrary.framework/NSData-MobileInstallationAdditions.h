//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (MobileInstallationAdditions)
- (_Bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 error:(id *)arg2;
- (_Bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 withBarrier:(_Bool)arg6 error:(id *)arg7;
- (_Bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 error:(id *)arg6;
- (_Bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 error:(id *)arg5;
@end

