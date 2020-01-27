// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import "TargetConditionals.h"

#import "FBSDKHashtag.h"
#import "FBSDKShareAPI.h"
#import "FBSDKShareConstants.h"
#import "FBSDKShareLinkContent.h"
#import "FBSDKShareMediaContent.h"
#import "FBSDKShareOpenGraphAction.h"
#import "FBSDKShareOpenGraphContent.h"
#import "FBSDKShareOpenGraphObject.h"
#import "FBSDKSharePhoto.h"
#import "FBSDKSharePhotoContent.h"
#import "FBSDKShareVideo.h"
#import "FBSDKShareVideoContent.h"
#import "FBSDKSharing.h"
#import "FBSDKSharingContent.h"

#if !TARGET_OS_TV
#import "FBSDKAppGroupContent.h"
#import "FBSDKAppInviteContent.h"
#import "FBSDKGameRequestContent.h"
#import "FBSDKGameRequestDialog.h"
#import "FBSDKLiking.h"
#import "FBSDKLikeObjectType.h"
#import "FBSDKShareButton.h"
#import "FBSDKShareCameraEffectContent.h"
#import "FBSDKShareDialog.h"
#import "FBSDKShareDialogMode.h"
#else
#import "FBSDKDeviceShareViewController.h"
#import "FBSDKDeviceShareButton.h"
#endif
