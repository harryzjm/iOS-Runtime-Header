//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requestUserConfirmation;
    _Bool _waitForDeletion;
    _Bool _showArchiveOption;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool showArchiveOption; // @synthesize showArchiveOption=_showArchiveOption;
@property(nonatomic) _Bool waitForDeletion; // @synthesize waitForDeletion=_waitForDeletion;
@property(nonatomic) _Bool requestUserConfirmation; // @synthesize requestUserConfirmation=_requestUserConfirmation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
