//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject
{
    NSURLFileTypeMappingsInternal *_internal;
}

+ (id)sharedMappings;
- (id)extensionsForMIMEType:(id)arg1;
- (id)preferredExtensionForMIMEType:(id)arg1;
- (id)MIMETypeForExtension:(id)arg1;
- (id)_UTIMIMETypeForExtension:(id)arg1;
- (id)_UTIextensionForMIMEType:(id)arg1;
- (id)_init;

@end

